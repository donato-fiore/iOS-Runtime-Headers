// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTSUGGESTION_H
#define UITEXTSUGGESTION_H

@class TIKeyboardCandidate, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UITextSuggestion : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
@property (nonatomic) BOOL displayStylePlain; // ivar: _displayStylePlain
@property (copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *inputText; // ivar: _inputText
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)classFallbacksForKeyedArchiver;
+(id)decodeTextSuggestions:(id)arg0 ;
+(id)encodeTextSuggestions:(id)arg0 ;
+(id)textSuggestionWithInputText:(id)arg0 ;
+(id)textSuggestionWithInputText:(id)arg0 searchText:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputText:(id)arg0 searchText:(id)arg1 displayText:(id)arg2 headerText:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif