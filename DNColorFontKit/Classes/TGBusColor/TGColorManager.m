//
//  TGColorManager.m
//  TGBus
//
//  Created by Ming on 2018/7/23.
//  Copyright © 2018 Jamie. All rights reserved.
//  管理项目所使用的Color（项目中所用到的所有Color均应由此类生成）

#import "TGColorManager.h"

@interface TGColorManager ()

@end

@implementation TGColorManager

static TGColorManager *_instance = nil;

#pragma mark - Intial Methods
+ (instancetype)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[self alloc] init];
        
    });
    return _instance;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _swatchMain = [UIColor colorWithRed:0. green:0. blue:0. alpha:.0];
        _colorPlaceholder = [self _colorWithHexString:@"ECECEC"];
        _colorLineView = [self _colorWithHexString:@"e6e6e6"];
        _colorBlack32 = [self _colorWithHexString:@"323232"];
        _colorWhite = [UIColor whiteColor];
        _colorGreenProgress = [self _colorWithHexString:@"#58D000"];
        _colorBlue4789F2 = [self _colorWithHexString:@"#4789F2"];
        _colorBlue4192EF = [self _colorWithHexString:@"#4192EF"];
        _colorBlue4090FE = [self _colorWithHexString:@"#4090FE"];
        _colorBlueA4C5F8 = [self _colorWithHexString:@"#A4C5F8"];
        _colorGray64 = [self _colorWithHexString:@"#646464"];
        _colorGray96 = [self _colorWithHexString:@"#969696"];
        _colorGrayF0 = [self _colorWithHexString:@"#F0F0F0"];
        _colorGray3C = [self _colorWithHexString:@"#3C3C3C"];
        _colorGray66 = [self _colorWithHexString:@"#666666"];
        _colorGrayA0 = [self _colorWithHexString:@"#666666"];
        _colorGray99 = [self _colorWithHexString:@"#999999"];
        _colorGrayAFB1B4 = [self _colorWithHexString:@"#AFB1B4"];
        _colorGray2E3442 = [self _colorWithHexString:@"#2E3442"];
        _colorCellLineEE = [self _colorWithHexString:@"#EEEEEE"];
        _colorGray19 = [self _colorWithHexString:@"#191919"];
        _colorGray8B = [self _colorWithHexString:@"#8B8B8B"];
        _colorEAF9FF = [self _colorWithHexString:@"#EAF9FF"];
        _colorF87070 = [self _colorWithHexString:@"#F87070" alpha:.8];
        _colorF92424 = [self _colorWithHexString:@"#F92424" alpha:.8];
        _color7800FF = [self _colorWithHexString:@"#7800FF" alpha:.8];
        _color4300FF = [self _colorWithHexString:@"#4300FF" alpha:.8];
        _color4DD5FF = [self _colorWithHexString:@"#4DD5FF" alpha:.8];
        _color39E1BD = [self _colorWithHexString:@"#39E1BD" alpha:.8];
        _colorFF8686 = [self _colorWithHexString:@"#FF8686" alpha:.8];
        _colorFB931E = [self _colorWithHexString:@"#FB931E" alpha:.8];
        _color00_0 = [self _colorWithHexString:@"#000000" alpha:.0];
        _color00_100 = [self _colorWithHexString:@"#000000" alpha:0.8];
        _colorGrayEE = [self _colorWithHexString:@"#EEEEEE"];
        _colorGray3D = [self _colorWithHexString:@"#3D3D3D"];
        _colorGray8A = [self _colorWithHexString:@"#8A8A8A"];
        _colorRedFF = [self _colorWithHexString:@"#FF3232"];
        _color333333 = [self _colorWithHexString:@"#333333"];
        _color191919 = [self _colorWithHexString:@"#191919"];
        _color3B3B3B = [self _colorWithHexString:@"#3B3B3B"];
        _colorBBBEC0 = [self _colorWithHexString:@"#BBBEC0"];
        _colorGrayBE = [self _colorWithHexString:@"#BEBEBE"];
        _colorE3E4E5 = [self _colorWithHexString:@"#E3E4E5"];
        _colorA0A0A0 = [self _colorWithHexString:@"#A0A0A0"];
        _colorOOOOOO = [self _colorWithHexString:@"#000000" alpha:.17];
        _colorBCBCBC = [self _colorWithHexString:@"#BCBCBC"];
        _color4090FE = [self _colorWithHexString:@"#4090FE"];
        _colorGrayF6 = [self _colorWithHexString:@"#F6F7F9"];
        _colorGrayDA = [self _colorWithHexString:@"#DADADA"];
        _colorGrayC1 = [self _colorWithHexString:@"#C1C1C1"];
        _colorD3D3D3 = [self _colorWithHexString:@"#D3D3D3"];
        _colorProgressRed = [self _colorWithHexString:@"#ff3333"];
        _colorProgressOrange = [self _colorWithHexString:@"#ff7e34"];
        _colorProgressYellow = [self _colorWithHexString:@"#ffcc00"];
        _colorProgressGreen = [self _colorWithHexString:@"#58d000"];
        _colorProgressDeepGreen = [self _colorWithHexString:@"24cf4c"];
        _colorProgressTrackTintColor = [self _colorWithHexString:@"#FFFFFF" alpha:0.4];
        _color00B9FF = [self _colorWithHexString:@"#00B9FF"];
        _color236AFE = [self _colorWithHexString:@"#236AFE" alpha:0.79];
        _colorFFCD16 = [self _colorWithHexString:@"#FFCD16"];
        /* 提示背景颜色*/
        _hudBackgroundColor = [self _colorWithHexString:@"#000000" alpha:0.8];
        //UIColorRGB(0., 0., 0., 0.8);
    }
    return self;
}


#pragma mark - Private Methods
- (UIColor *)_colorWithHexString:(NSString *)hexString {
    
    NSString *colorString = [[hexString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    if (colorString.length < 6) {
        return [UIColor clearColor];
    }
    
    if ([colorString hasPrefix:@"0X"]) {
        colorString = [colorString substringFromIndex:2];
    }
    
    if ([colorString hasPrefix:@"#"]) {
        colorString = [colorString substringFromIndex:1];
    }
    
    if (colorString.length != 6) {
        return [UIColor clearColor];
    }
    
    NSRange range;
    range.location = 0;
    range.length = 2;
    // r
    NSString *rString = [colorString substringWithRange:range];
    
    // g
    range.location = 2;
    NSString *gString = [colorString substringWithRange:range];
    
    // b
    range.location = 4;
    NSString *bString = [colorString substringWithRange:range];
    
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:(float)r / 255.0 green:(float)g / 255.0 blue:(float)b / 255.0 alpha:1.0];
}

- (UIColor *)_colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha{
    return [[self _colorWithHexString:hexString] colorWithAlphaComponent:alpha];
}

@end
