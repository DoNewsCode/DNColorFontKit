//
//  TGFontManager.h
//  TGBus
//
//  Created by Ming on 2018/7/23.
//  Copyright © 2018 Jamie. All rights reserved.
//  TGBus项目\引力资讯项目 - 管理项目所使用的Font（项目中所用到的所有Font均应由此类生成）

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TGFontManager : NSObject

+ (instancetype)sharedInstance;

/** 标准Regular11号字 */
@property (nonatomic, readonly, copy) UIFont *size11Normal;
/** 标准Regular12号字 */
@property (nonatomic, readonly, copy) UIFont *size12Normal;
/** 标准Regular13号字 */
@property (nonatomic, readonly, copy) UIFont *size13Normal;
/** 标准Regular14号字 */
@property (nonatomic, readonly, copy) UIFont *size14Normal;
/** 标准Regular15号字 */
@property (nonatomic, readonly, copy) UIFont *size15Normal;
/** 标准Regular16号字 */
@property (nonatomic, readonly, copy) UIFont *size16Normal;
/** 标准Regular17号字 */
@property (nonatomic, readonly, copy) UIFont *size17Normal;
/** 标准Regular18号字 */
@property (nonatomic, readonly, copy) UIFont *size18Normal;
/** 标准Regular32号字 */
@property (nonatomic, readonly, copy) UIFont *size32Normal;

/** PingFangSC-Medium 11号字 */
@property (nonatomic, readonly, copy) UIFont *size11PingFangSC_Medium;
/** PingFangSC-Medium 12号字 */
@property (nonatomic, readonly, copy) UIFont *size12PingFangSC_Medium;
/** PingFangSC-Medium 14号字 */
@property (nonatomic, readonly, copy) UIFont *size14PingFangSC_Medium;
/** PingFangSC-Medium 15号字 */
@property (nonatomic, readonly, copy) UIFont *size15PingFangSC_Medium;
/** PingFangSC-Medium 16号字 */
@property (nonatomic, readonly, copy) UIFont *size16PingFangSC_Medium;
/** PingFangSC-Medium 17号字 */
@property (nonatomic, readonly, copy) UIFont *size17PingFangSC_Medium;
/** PingFangSC-Medium 18号字 */
@property (nonatomic, readonly, copy) UIFont *size18PingFangSC_Medium;
/** PingFangSC-Medium 19号字 */
@property (nonatomic, readonly, copy) UIFont *size19PingFangSC_Medium;
/** PingFangSC-Medium 36号字 */
@property (nonatomic, readonly, copy) UIFont *size36PingFangSC_Medium;
/** PingFangSC-Medium 50号字 */
@property (nonatomic, readonly, copy) UIFont *size50PingFangSC_Medium;
/** PingFangSC-Medium 60号字 */
@property (nonatomic, readonly, copy) UIFont *size60PingFangSC_Medium;

/** PingFangSC-Regular 12号字 */
@property (nonatomic, readonly, copy) UIFont *size12PingFangSC_Regular;
/** PingFangSC-Regular 13号字 */
@property (nonatomic, readonly, copy) UIFont *size13PingFangSC_Regular;
/** PingFangSC-Regular 14号字 */
@property (nonatomic, readonly, copy) UIFont *size14PingFangSC_Regular;
/** PingFangSC-Regular 15号字 */
@property (nonatomic, readonly, copy) UIFont *size15PingFangSC_Regular;
/** PingFangSC-Regular 16号字 */
@property (nonatomic, readonly, copy) UIFont *size16PingFangSC_Regular;
/** PingFangSC-Regular 17号字 */
@property (nonatomic, readonly, copy) UIFont *size17PingFangSC_Regular;
/** PingFangSC-Regular 18号字 */
@property (nonatomic, readonly, copy) UIFont *size18PingFangSC_Regular;
/** PingFangSC-Regular 19号字 */
@property (nonatomic, readonly, copy) UIFont *size19PingFangSC_Regular;
/** PingFangSC-Regular 20号字 */
@property (nonatomic, readonly, copy) UIFont *size20PingFangSC_Regular;


@end

NS_ASSUME_NONNULL_END
