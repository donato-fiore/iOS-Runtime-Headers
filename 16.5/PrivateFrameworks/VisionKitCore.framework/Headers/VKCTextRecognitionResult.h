// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCTEXTRECOGNITIONRESULT_H
#define VKCTEXTRECOGNITIONRESULT_H

@class NSArray, NSAttributedString, NSDictionary, NSString, CROutputRegion, NSDate, NSIndexSet, CRDocumentOutputRegion, VNDocumentObservation, VNRecognizedTextBlockObservation;
@protocol NSSecureCoding, VKCTextRecognitionResultTextDelegate;

#import <Foundation/Foundation.h>

#import "VKTextRange.h"

@interface VKCTextRecognitionResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allLineQuads;
@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) NSDictionary *attributedTextRangeMapping; // ivar: _attributedTextRangeMapping
@property (retain, nonatomic) NSString *buildString; // ivar: _buildString
@property (retain, nonatomic) CROutputRegion *crTitleOutput; // ivar: _crTitleOutput
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSArray *dataDetectors; // ivar: _dataDetectors
@property (retain, nonatomic) NSArray *filteredNormalizedRectangleQuads; // ivar: _filteredNormalizedRectangleQuads
@property (copy, nonatomic) NSArray *filteredTextDataDetectors; // ivar: _filteredTextDataDetectors
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) NSUInteger imageSource; // ivar: _imageSource
@property (copy, nonatomic) NSArray *inspectableElements; // ivar: _inspectableElements
@property (copy, nonatomic) NSArray *mrcDataDetectors; // ivar: _mrcDataDetectors
@property (retain, nonatomic) NSArray *normalizedTextLineBoundingBoxes; // ivar: _normalizedTextLineBoundingBoxes
@property (retain, nonatomic) NSArray *rectangleObservations; // ivar: _rectangleObservations
@property (retain, nonatomic) NSArray *requestBarcodeSymbologies; // ivar: _requestBarcodeSymbologies
@property (retain, nonatomic) NSArray *requestLocales; // ivar: _requestLocales
@property (retain, nonatomic) NSIndexSet *richPasteBoardIndexes; // ivar: _richPasteBoardIndexes
@property (retain, nonatomic) CRDocumentOutputRegion *sourceDocument; // ivar: _sourceDocument
@property (retain, nonatomic) VNDocumentObservation *sourceVNDocument; // ivar: _sourceVNDocument
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (weak, nonatomic) NSObject<VKCTextRecognitionResultTextDelegate> *textDelegate; // ivar: _textDelegate
@property (copy, nonatomic) NSArray *textElements; // ivar: _textElements
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) VNRecognizedTextBlockObservation *titleObservation; // ivar: _titleObservation
@property (readonly, nonatomic) NSArray *unfilteredDataDetectors; // ivar: _unfilteredDataDetectors
@property (copy, nonatomic) NSArray *unfilteredTextDataDetectors; // ivar: _unfilteredTextDataDetectors
@property (readonly, nonatomic) VKTextRange *vk_documentRange;


+(BOOL)supportsSecureCoding;
-(BOOL)containsRichPasteboardElementsForRange:(id)arg0 ;
-(BOOL)shouldShowTextMarkerForMarkerType:(NSInteger)arg0 ;
-(NSUInteger)countOfDataDetectorsWithTypes:(NSUInteger)arg0 ;
-(id)adjustTextRangeToSelectableRange:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)closestBlockOfType:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 maxDistance:(NSInteger)arg2 ;
-(id)convertPlainTextRangeToAttributedRange:(id)arg0 ;
-(id)documentElements;
-(id)elementMatchingOutputRegion:(id)arg0 ;
-(id)filterTextRectanglesFromRectangleObservations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentObservation:(id)arg0 mrcDataDetectors:(id)arg1 imageSize:(struct CGSize )arg2 ;
-(id)markerFormatForListItem:(id)arg0 ;
-(id)normalizedSelectionQuadsForRange:(id)arg0 ;
-(id)rangeOfLineForPosition:(id)arg0 ;
-(id)rangeOfWordForPosition:(id)arg0 ;
-(id)selectionRectsForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(id)selectionRectsForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 addTranscript:(BOOL)arg3 ;
-(id)smallestSelectableRangeForPosition:(id)arg0 ;
-(id)zeroWidthStringOfLength:(NSUInteger)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 documentView:(id)arg1 contentRect:(struct CGRect )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAttributedText;
-(void)updateInspectableElements;
-(void)updateMRCDataDetectors:(id)arg0 ;
-(void)updateTextDataDetectors;
-(void)updateVNDocumentObservation:(id)arg0 ;


@end


#endif