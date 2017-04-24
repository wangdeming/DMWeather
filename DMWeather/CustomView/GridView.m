//
//  GridView.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/20.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "GridView.h"
#import "AlphaView.h"

@interface GridView ()

@property (nonatomic, strong) AlphaView *alphaView;

@end

@implementation GridView

- (void)buildView {
    
    CGFloat gridLength      = (self.gridLength <= 0 ? 10.f : self.gridLength);
    
    // 水平线条的个数
    int horizontalLineCount = 5;
    for (int i = 0; i < horizontalLineCount; i++) {
        
        CGRect rect          = CGRectMake(0, gridLength * i, gridLength * horizontalLineCount, 0.5);
        UIView *line         = [[UIView alloc] initWithFrame:rect];
        line.backgroundColor = COLOR_CIRCLE_;
        
        if (i == 0) {
            
            line.alpha = 0.f;
            
        } else if (i == horizontalLineCount - 1) {
            
            line.alpha = 0.f;
        }
        
        [self addSubview:line];
    }
    
    // 垂直线的个数
    int verticalLineCount = 6;
    for (int i = 0; i < verticalLineCount; i++) {
        
        CGRect rect          = CGRectMake(gridLength * i, 0, 0.5, gridLength * (verticalLineCount - 2));
        UIView *line         = [[UIView alloc] initWithFrame:rect];
        line.backgroundColor = COLOR_CIRCLE_;
        
        if (i == 0) {
            
            line.alpha = 0.f;
            
        } else if (i == verticalLineCount - 1) {
            
            line.alpha = 0.f;
        }
        
        [self addSubview:line];
    }
    
    self.height     = horizontalLineCount * gridLength;
    self.width      = verticalLineCount   * gridLength;
    self.viewOrigin = self.origin;
    
    self.alphaView = [[AlphaView alloc] initWithFrame:self.bounds];
    [self.alphaView alphaType];
    self.alphaView.x = -self.width;
    self.maskView = self.alphaView;
}

- (void)showWithDuration:(CGFloat)duration {
    
    [UIView animateWithDuration:duration animations:^{
        
        self.alphaView.x = -5;
        self.alpha = 1.f;
        
    } completion:^(BOOL finished) {
        
    }];
}

- (void)hideWithDuration:(CGFloat)duration {
    
    [UIView animateWithDuration:duration animations:^{
        
        self.alphaView.x = self.width;
        self.alpha       = 0.f;
        
    } completion:^(BOOL finished) {
        
        self.alphaView.x = -self.width;
    }];
}

@end
