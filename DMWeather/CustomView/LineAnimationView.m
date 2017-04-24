//
//  LineAnimationView.m
//  DMWeather
//
//  Created by SDC201 on 2017/4/24.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "LineAnimationView.h"

@implementation LineAnimationView

- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    
    if (self) {
        
        self.alpha              = 0.f;
        self.maxAlpha           = 0.1f;
        self.fadeToShowDuration = 1.75f;
        self.fadeToHideDuration = 0.75f;
    }
    
    return self;
}

- (void)show {
    
}

- (void)hide {
    
}

@end
