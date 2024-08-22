// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMOBILEASSETUTIL_H
#define TRIMOBILEASSETUTIL_H


#import <Foundation/Foundation.h>


@interface TRIMobileAssetUtil : NSObject



+(id)allTrialAssetTypes;
+(id)siriTrialAssetTypes;
+(void)_setAllAssetsToAudience:(id)arg0 siriAudience:(id)arg1 assetURL:(id)arg2 siriAssetURL:(id)arg3 ;
+(void)configureMobileAssetForTrialEnvironment:(NSInteger)arg0 ;


@end


#endif