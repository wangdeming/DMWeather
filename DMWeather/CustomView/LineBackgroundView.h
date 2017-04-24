//
//  LineBackgroundView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/17.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LineBackgroundView : UIView

@property (nonatomic) CGFloat            lineWidth;
@property (nonatomic) CGFloat            lineGap;
@property (nonatomic, strong) UIColor   *lineColor;

- (void)buildView;
+ (instancetype)createViewWithFrame:(CGRect)frame
                          LineWidth:(CGFloat)width
                            lineGap:(CGFloat)lineGap
                          lineColor:(UIColor *)color;

@end
