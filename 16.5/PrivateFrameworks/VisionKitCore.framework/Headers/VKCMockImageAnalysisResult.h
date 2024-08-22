// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCMOCKIMAGEANALYSISRESULT_H
#define VKCMOCKIMAGEANALYSISRESULT_H

@class NSArray, NSDictionary, NSString;


#import "VKCImageAnalysisResult.h"
#import "VKCMockTextProvider.h"

@interface VKCMockImageAnalysisResult : VKCImageAnalysisResult {
    NSArray *_dataDetectors;
    NSArray *_allLineQuads;
}


@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL isRunningTest; // ivar: _isRunningTest
@property (retain, nonatomic) NSDictionary *sourceDict; // ivar: _sourceDict
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) VKCMockTextProvider *textProvider; // ivar: _textProvider


+(id)mockImageAnalysisResultFromDictionary:(id)arg0 ;
-(id)adjustTextRangeToSelectableRange:(id)arg0 ;
-(id)allLineQuads;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)dataDetectors;
-(id)rangeOfLineForPosition:(id)arg0 ;
-(id)rangeOfWordForPosition:(id)arg0 ;
-(id)selectionRectsForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(id)smallestSelectableRangeForPosition:(id)arg0 ;
-(id)stringForLine:(id)arg0 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(void)addMockDataDetectorElementsFromArray:(id)arg0 ;
-(void)generateText;


@end


#endif