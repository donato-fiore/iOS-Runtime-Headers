// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKMUNINROAD_H
#define VKMUNINROAD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKMuninRoad : NSObject

@property (readonly, nonatomic) NSString *roadName; // ivar: _roadName


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithLocalizedName:(char *)arg0 ;
-(id)initWithMuninRoadEdge:(*void)arg0 localize:(BOOL)arg1 ;


@end


#endif