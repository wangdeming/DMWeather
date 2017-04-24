//
//  MaxTempView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/20.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MaxTempView : UIView

/**
 *  最高温度
 */
@property (nonatomic) CGFloat maxTemp;

/**
 *  最低温度
 */
@property (nonatomic) CGFloat minTemp;

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
