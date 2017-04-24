//
//  UILabel+Temperature.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Temperature)

/**
 *  frame值为(0, 0, 45, 100)
 *
 *  @param text 文本
 *  @param tag  该label的tag值
 *
 *  @return 该label
 */
+ (UILabel *)labelWithNumberText:(NSString *)text tag:(int)tag;

@end
