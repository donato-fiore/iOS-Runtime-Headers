// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVLALSDATA_H
#define TVLALSDATA_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface TVLALSData : NSObject

@property (retain, nonatomic) NSNumber *cct; // ivar: _cct
@property (retain, nonatomic) NSArray *channelData; // ivar: _channelData
@property (retain, nonatomic) NSNumber *lux; // ivar: _lux
@property (retain, nonatomic) NSNumber *x; // ivar: _x
@property (retain, nonatomic) NSNumber *y; // ivar: _y
@property (retain, nonatomic) NSNumber *z; // ivar: _z


+(id)instanceFromDictionary:(id)arg0 ;
-(id)description;


@end


#endif