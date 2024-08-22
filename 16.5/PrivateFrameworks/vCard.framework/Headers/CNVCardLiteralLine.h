// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDLITERALLINE_H
#define CNVCARDLITERALLINE_H

@class NSData;


#import "CNVCardLine.h"

@interface CNVCardLiteralLine : CNVCardLine {
    NSData *_literalValue;
}




+(id)lineWithLiteralValue:(id)arg0 ;
-(id)initWithLiteralValue:(id)arg0 ;
-(void)serializeWithStrategy:(id)arg0 ;


@end


#endif