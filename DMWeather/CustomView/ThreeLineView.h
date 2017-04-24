//
//  ThreeLineView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AnimatedLineView.h"

@interface ThreeLineView : UIView

/**
 *  显示出来
 *
 *  @param duration 动画持续时间
 *  @param animated 是否执行动画
 */
- (void)showWithDuration:(CGFloat)duration animated:(BOOL)animated;

/**
 *  隐藏
 *
 *  @param duration 动画持续时间
 *  @param animated 是否执行动画
 */
- (void)hideWithDuration:(CGFloat)duration animated:(BOOL)animated;

/**
 *  风的速度
 */
@property (nonatomic) CGFloat circleByOneSecond; // 这个值必须给出

/**
 *  一秒钟旋转几圈
 *
 *  @param circleByOneSecond 一秒钟旋转几圈
 */
- (void)rotateImageViewWithCircleByOneSecond;

@end
