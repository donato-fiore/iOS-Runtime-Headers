// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKLEGACYCUSTOMFORMAT_H
#define TSKLEGACYCUSTOMFORMAT_H



#import "TSKFormat.h"

@interface TSKLegacyCustomFormat : TSKFormat

@property (readonly, nonatomic) unsigned int legacyID; // ivar: _legacyID


-(BOOL)isEqual:(id)arg0 ;
-(id)asLegacyCustomFormat;
-(id)initWithFormatType:(unsigned int)arg0 legacyID:(unsigned int)arg1 ;


@end


#endif