//
//  FailedLongPressView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/17.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LineBackgroundView.h"
#import "PressAnimationButton.h"

@class FailedLongPressView;
@protocol FailedLongPressViewDelegate <NSObject>

- (void)pressEvent:(FailedLongPressView *)view;

@end

@interface FailedLongPressView : UIView

@property (nonatomic, weak) id<FailedLongPressViewDelegate> delegate;

- (void)buildView;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;

/**
 *  移除
 */
- (void)remove;

@end
