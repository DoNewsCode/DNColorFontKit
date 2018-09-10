//
//  TGFontManager.m
//  TGBus
//
//  Created by Ming on 2018/7/23.
//  Copyright © 2018 Jamie. All rights reserved.
//

#import "TGFontManager.h"


@interface TGFontManager ()

@end

@implementation TGFontManager
static TGFontManager *_instance = nil;

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
        _size11Normal = [UIFont systemFontOfSize:11.];
        _size12Normal = [UIFont systemFontOfSize:12];
        _size13Normal = [UIFont systemFontOfSize:13];
        _size14Normal = [UIFont systemFontOfSize:14];
        _size15Normal = [UIFont systemFontOfSize:15];
        _size16Normal = [UIFont systemFontOfSize:16];
        _size17Normal = [UIFont systemFontOfSize:17];
        _size18Normal = [UIFont systemFontOfSize:18];
        _size32Normal = [UIFont systemFontOfSize:32];
        
        
        _size11PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:11];
        _size12PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:12];
        _size14PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:14];
        _size15PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:15];
        _size16PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:16];
        _size17PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:17];
        _size18PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:18];
        _size19PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:19];
        _size36PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:36];
        _size50PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:50];
        _size60PingFangSC_Medium = [UIFont fontWithName:@"PingFangSC-Medium" size:60];
        
        _size12PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:12];
        _size13PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:13];
        _size14PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:14];
        _size15PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:15];
        _size16PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:16];
        _size17PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:17];
        _size18PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:18];
        _size19PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:19];
        _size20PingFangSC_Regular = [UIFont fontWithName:@"PingFangSC-Regular" size:20];
       
    }
    return self;
}
@end
