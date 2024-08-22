// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLCSSSOURCERANGE_H
#define RWIPROTOCOLCSSSOURCERANGE_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (nonatomic) int endColumn;
@property (nonatomic) int endLine;
@property (nonatomic) int startColumn;
@property (nonatomic) int startLine;


-(id)initWithStartLine:(int)arg0 startColumn:(int)arg1 endLine:(int)arg2 endColumn:(int)arg3 ;


@end


#endif