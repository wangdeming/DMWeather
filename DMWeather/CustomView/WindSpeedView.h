//
//  WindSpeedView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WindSpeedView : UIView

/**
 *  一秒钟旋转几圈
 */
@property (nonatomic) CGFloat circleByOneSecond;

/**
 *  风的速度
 */
@property (nonatomic) CGFloat windSpeed;

/**
 *  创建出view
 */
- (void)buildView;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;


@end
