//
//  UIView+GlowView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/17.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (GlowView)

@property (nonatomic, strong) NSNumber *GCDTimerInterval; // 定时器的时间间隔，给float值
@property (nonatomic, strong) NSNumber *glowDuration;     // layer动画的时间长度，给float值
@property (nonatomic, strong) NSNumber *glowLayerOpacity; // 设置glowLayer的动画透明度的程度，给float值，范围在[0,1]

- (void)createGlowLayerWithColor:(UIColor *)color glowRadius:(CGFloat)radius;
- (void)startGlow;
- (void)glowToGlowLayerOnce;
- (void)glowToNormalLayerOnce;

@end
