// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLRUNTIMEOBJECTPREVIEW_H
#define RWIPROTOCOLRUNTIMEOBJECTPREVIEW_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) BOOL lossless;
@property (nonatomic) BOOL overflow;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) int size;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) NSInteger subtype;
@property (nonatomic) NSInteger type;


-(id)initWithType:(NSInteger)arg0 lossless:(BOOL)arg1 ;


@end


#endif