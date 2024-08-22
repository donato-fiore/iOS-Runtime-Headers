// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSUSERTYPECHECKER_H
#define TPSUSERTYPECHECKER_H


#import <Foundation/Foundation.h>


@interface TPSUserTypeChecker : NSObject



+(NSInteger)userType;
+(NSInteger)userTypeFromCloudDataWithKey:(id)arg0 ;
+(NSInteger)userTypeFromMigratorData;
+(id)_previousBuildVersion;
+(int)_majorVersionForBuildVersion:(id)arg0 ;


@end


#endif