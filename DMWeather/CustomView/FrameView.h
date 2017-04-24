//
//  FrameView.h
//  DMWeather
//
//  Created by SDC201 on 2017/4/18.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSString+StringHeight.h"

@interface FrameView : UIView

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIFont   *font;
@property (nonatomic, strong) UIColor  *textColor;

@property (nonatomic)         CGFloat   underLineWidth;
@property (nonatomic, strong) UIColor  *underLineColor;

- (void)buildViews;

- (void)fadeToShow;
- (void)fadeTohide;

@end
