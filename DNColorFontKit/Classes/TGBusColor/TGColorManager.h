//
//  TGColorManager.h
//  TGBus
//
//  Created by Ming on 2018/7/23.
//  strongright © 2018 Jamie. All rights reserved.
//  TGBus项目-管理项目所使用的Color（项目中所用到的所有Color均应由此类生成）
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface TGColorManager : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly, strong) UIColor *swatchMain;
/// 占位背景色
@property (nonatomic, readonly, strong) UIColor *colorPlaceholder;
/// 纯白色
@property (nonatomic, readonly, strong) UIColor *colorWhite;
/// 底部线条颜色
@property (nonatomic, readonly, strong) UIColor *colorLineView;
/// 黑色字体颜色
@property (nonatomic, readonly, strong) UIColor *colorBlack32;
/// #646464
@property (nonatomic, readonly, strong) UIColor *colorGray64;
/// #969696
@property (nonatomic, readonly, strong) UIColor *colorGray96;
/// 灰度 #F0F0F0
@property (nonatomic, readonly, strong) UIColor *colorGrayF0;
/// 灰度 #3C3C3C
@property (nonatomic, readonly, strong) UIColor *colorGray3C;
/// 灰度 #C1C1C1
@property (nonatomic, readonly, strong) UIColor *colorGrayC1;
/// 灰度 #BEBEBE
@property (nonatomic, readonly, strong) UIColor *colorGrayBE;
/// 灰度 #666666
@property (nonatomic, readonly, strong) UIColor *colorGray66;
/// 灰度 #A0A0A0
@property (nonatomic, readonly, strong) UIColor *colorGrayA0;
/// 灰度 #999999
@property (nonatomic, readonly, strong) UIColor *colorGray99;
/// 灰度 #EEEEEE
@property (nonatomic, readonly, strong) UIColor *colorGrayEE;
/// 灰度 #3D3D3D
@property (nonatomic, readonly, strong) UIColor *colorGray3D;
/// 灰度 #8A8A8A
@property (nonatomic, readonly, strong) UIColor *colorGray8A;
/// 灰度 ##2E3442
@property (nonatomic, readonly, strong) UIColor *colorGray2E3442;
/// 灰度 #AFB1B4
@property (nonatomic, readonly, strong) UIColor *colorGrayAFB1B4;
/// 灰度 #191919
@property (nonatomic, readonly, strong) UIColor *colorGray19;
/// 灰度 #8B8B8B
@property (nonatomic, readonly, strong) UIColor *colorGray8B;
/// 灰度 #F6F7F9
@property (nonatomic, readonly, strong) UIColor *colorGrayF6;
/// 灰度 #DADADA
@property (nonatomic, readonly, strong) UIColor *colorGrayDA;

/// 红色 #FF3232
@property (nonatomic, readonly, strong) UIColor *colorRedFF;

/// 蓝色 #4789F2
@property (nonatomic, readonly, strong) UIColor *colorBlue4789F2;
/// 蓝色 #4192EF
@property (nonatomic, readonly, strong) UIColor *colorBlue4192EF;
/// 蓝色 #4090FE
@property (nonatomic, readonly, strong) UIColor *colorBlue4090FE;
/// 蓝色 #A4C5F8 首页轮播图阴影
@property (nonatomic, readonly, strong) UIColor *colorBlueA4C5F8;

/// 绿色进度条 #58D000
@property (nonatomic, readonly, strong) UIColor *colorGreenProgress;
/// Cell线条 #EEEEEE
@property (nonatomic, readonly, strong) UIColor *colorCellLineEE;
/// 深度测评渐变色 start #EAF9FF - #FFFFFF
@property (nonatomic, readonly, strong) UIColor *colorEAF9FF;

/// 游戏单样式一渐变色 start #00B9FF - ##236AFE
@property (nonatomic, readonly, strong) UIColor *color00B9FF;
@property (nonatomic, readonly, strong) UIColor *color236AFE;
/// 游戏单样式二渐变色 start #7800FF - #4300FF
@property (nonatomic, readonly, strong) UIColor *color7800FF;
@property (nonatomic, readonly, strong) UIColor *color4300FF;
/// 游戏单样式三渐变色 start #F87070 - #F92424
@property (nonatomic, readonly, strong) UIColor *colorF87070;
@property (nonatomic, readonly, strong) UIColor *colorF92424;
/// 游戏单样式三渐变色 start #4DD5FF - #39E1BD
@property (nonatomic, readonly, strong) UIColor *color4DD5FF;
@property (nonatomic, readonly, strong) UIColor *color39E1BD;
/// 游戏单变色 start #FF8686 - #FB931E
@property (nonatomic, readonly, strong) UIColor *colorFF8686;
@property (nonatomic, readonly, strong) UIColor *colorFB931E;
/// 游戏单数量 颜色 #FFCD16
@property (nonatomic, readonly, strong) UIColor *colorFFCD16;

/// 今日资讯渐变 start #000000 %0 - #000000 100%
@property (nonatomic, readonly, strong) UIColor *color00_0;
@property (nonatomic, readonly, strong) UIColor *color00_100;

//游戏详情页
/// 黑色字体#333333
@property (nonatomic, readonly, strong) UIColor *color333333;
/// 阴影色值#191919
@property (nonatomic, readonly, strong) UIColor *color191919;
/// 灰黑色#3B3B3B(文章页 名称字体颜色)
@property (nonatomic, readonly, strong) UIColor *color3B3B3B;
@property (nonatomic, readonly, strong) UIColor *colorBBBEC0;


@property (nonatomic,readonly,strong) UIColor *colorE3E4E5;

@property (nonatomic,readonly,strong) UIColor *colorA0A0A0;

@property (nonatomic,readonly,strong) UIColor *colorOOOOOO;

@property (nonatomic,readonly,strong) UIColor *colorBCBCBC;

@property (nonatomic,readonly,strong) UIColor *color4090FE;

@property (nonatomic,readonly,strong) UIColor *colorD3D3D3;

#pragma mark - 进度条级别颜色
/// 红色 0 - 2
@property (nonatomic,readonly,strong) UIColor *colorProgressRed;
/// 橙色 2 -4
@property (nonatomic,readonly,strong) UIColor *colorProgressOrange;
/// 黄色 4 - 6
@property (nonatomic,readonly,strong) UIColor *colorProgressYellow;
/// 绿色 6 - 8
@property (nonatomic,readonly,strong) UIColor *colorProgressGreen;
/// 深绿色 8 - 10
@property (nonatomic,readonly,strong) UIColor *colorProgressDeepGreen;
/// 进度条底部条颜色 白色 50%透明度
@property (nonatomic,readonly,strong) UIColor *colorProgressTrackTintColor;

@property (nonatomic,readonly,strong) UIColor *hudBackgroundColor;

@end

NS_ASSUME_NONNULL_END
