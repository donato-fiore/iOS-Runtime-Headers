// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISSLOTTAG_H
#define UISSLOTTAG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UISSlotTag : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(NSUInteger)cacheLimit;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)failGradeForStyle:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)hitTestInformationMaskForStyle:(id)arg0 ;
-(float)backgroundStatisticsFailingContrastForStyle:(id)arg0 ;
-(float)backgroundStatisticsForegroundForStyle:(id)arg0 ;
-(float)backgroundStatisticsPassingContrastForStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(struct ? )backgroundStatisticsRegionForStyle:(id)arg0 ;
-(unsigned int)secureNameForStyle:(id)arg0 ;


@end


#endif