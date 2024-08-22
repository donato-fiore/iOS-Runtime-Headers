// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTINPUTSTRINGTOKENIZER_H
#define UITEXTINPUTSTRINGTOKENIZER_H

@class UIResponder<UITextInput>, NSString;
@protocol UITextInputTokenizer;

#import <Foundation/Foundation.h>


@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer>

 {
    UIResponder<UITextInput> *_textInput;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isDownstreamForDirection:(NSInteger)arg0 atPosition:(id)arg1 ;
-(BOOL)isPosition:(id)arg0 atBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isPosition:(id)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(NSInteger)_distanceForTokenizerWithGranularity:(NSInteger)arg0 ;
-(NSInteger)_indexForTextPosition:(id)arg0 ;
-(id)_closestTokenSubrangeForPosition:(id)arg0 granularity:(NSInteger)arg1 downstream:(BOOL)arg2 ;
-(id)_positionFromPosition:(id)arg0 offset:(NSUInteger)arg1 affinity:(NSInteger)arg2 ;
-(id)initWithTextInput:(id)arg0 ;
-(id)positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)rangeEnclosingPosition:(id)arg0 withGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;


@end


#endif