// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLAPPLICATION_H
#define TMLAPPLICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLApplication : NSObject

@property (readonly, nonatomic) NSString *applicationVersion;
@property (readonly, nonatomic) NSString *hardwareModel;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif