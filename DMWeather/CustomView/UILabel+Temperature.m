//
//  UILabel+Temperature.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "UILabel+Temperature.h"

@implementation UILabel (Temperature)

+ (UILabel *)labelWithNumberText:(NSString *)text tag:(int)tag {
    
    UILabel *label      = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 45, 100)];
    label.text          = text;
    label.tag           = tag;
    label.textAlignment = NSTextAlignmentCenter;
    label.textColor     = COLOR_PURE_;
    label.font          = [UIFont fontWithName:LATO_THIN size:75.f];
    
    return label;
}

@end
