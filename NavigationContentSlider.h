//
//  NavigationSlideViewController.h
//
//  Created by Ed Rackham on 14/11/2012.
//  Copyright (c) 2012 edrackham.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NavigationContentSlider;

@protocol NavigationContentSliderDataSource <NSObject>

@required
- (NSInteger)numberOfSectionsInNavigationContentSlider:(NavigationContentSlider *)navigationContentSlider;
- (NSInteger)widthOfSectionTitlesInNavigationContentSlider:(NavigationContentSlider *)navigationContentSlider;
- (NSString *)navigationContentSlider:(NavigationContentSlider *)navigationContentSlider titleForSectionAtIndex:(NSInteger)index;
- (UIView *)navigationContentSlider:(NavigationContentSlider *)navigationContentSlider viewForSectionAtIndex:(NSInteger)index;

@end

@interface NavigationContentSlider : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate>

@property (assign, nonatomic) id <NavigationContentSliderDataSource> dataSource;
@property (assign, nonatomic) BOOL manualInit;
@property (assign, nonatomic) BOOL isInitalised;

- (void)initNavigationContentSlider;
- (CGRect)maximumUsableFrame;
- (void)clearNavigationContentSlider;
- (void)setCurrentSlideIndex:(NSInteger)currentSlideIndex animated:(BOOL)animated;

@end
