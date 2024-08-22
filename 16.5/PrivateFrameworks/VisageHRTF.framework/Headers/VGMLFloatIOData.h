// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGMLFLOATIODATA_H
#define VGMLFLOATIODATA_H

@class NSData;


#import "VGMLIOData.h"

@interface VGMLFloatIOData : VGMLIOData

@property (readonly, nonatomic) NSData *data; // ivar: _data


-(*float)getData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)getSize;
-(id)initWithData:(id)arg0 ;
-(id)initWithSize:(NSUInteger)arg0 withData:(*float)arg1 ;


@end


#endif