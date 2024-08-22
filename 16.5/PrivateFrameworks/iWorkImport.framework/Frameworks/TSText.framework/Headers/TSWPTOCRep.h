// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTOCREP_H
#define TSWPTOCREP_H

@class CAShapeLayer;


#import "TSWPShapeRep.h"

@interface TSWPTOCRep : TSWPShapeRep {
    CAShapeLayer *_selectionHighlightLayer;
}




+(id)TOCReferenceNameWithParagraphIndex:(NSUInteger)arg0 ;
-(BOOL)canMakePathEditable;
-(BOOL)shouldCreateKnobs;
-(BOOL)shouldShowKnobs;
-(NSUInteger)charIndexAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)indexOfHitTOCEntryAtPoint:(struct CGPoint )arg0 ;
-(id)hyperlinkRegions;
-(id)i_paragraphStyleAtPoint:(struct CGPoint )arg0 ;
-(id)paragraphStylesBetweenCharIndex:(NSUInteger)arg0 andCharIndex:(NSUInteger)arg1 ;
-(id)tocInfo;


@end


#endif