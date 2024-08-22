// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSYNTAXHIGHLIGHTTOKEN_H
#define WFSYNTAXHIGHLIGHTTOKEN_H

@class NSString;
@protocol WFSyntaxHighlightToken;

#import <Foundation/Foundation.h>


@interface WFSyntaxHighlightToken : NSObject <WFSyntaxHighlightToken>



@property int length; // ivar: _length
@property BOOL overflows; // ivar: _overflows
@property int start; // ivar: _start
@property (retain) NSString *string; // ivar: _string


+(id)constructToken;
-(id)description;
-(struct _NSRange )range;


@end


#endif