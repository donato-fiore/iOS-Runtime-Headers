// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPFOOTNOTELAYOUTCONTROLLER_H
#define TPFOOTNOTELAYOUTCONTROLLER_H

@protocol TSWPFootnoteMarkProvider;

#import <Foundation/Foundation.h>

#import "TPDocumentRoot.h"

@interface TPFootnoteLayoutController : NSObject {
    TPDocumentRoot *_documentRoot;
    BOOL _bumpedDocumentEndnotesForPageBreak;
}


@property (readonly, weak, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider; // ivar: _pageController


-(NSUInteger)p_layoutFootnotesInRange:(struct _NSRange )arg0 intoFootnoteContainer:(id)arg1 maxBlockHeight:(CGFloat)arg2 measure:(BOOL)arg3 inflating:(BOOL)arg4 ;
-(id)initWithPaginatedPageController:(id)arg0 ;
-(id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange )arg0 ;
-(id)p_layoutForFootnoteReferenceStorage:(id)arg0 ;
-(struct _NSRange )endnoteRangeForSectionCharRange:(struct _NSRange )arg0 isLastSection:(BOOL)arg1 sectionHint:(id)arg2 ;
-(struct _NSRange )footnoteLayoutRangeForPageCharRange:(struct _NSRange )arg0 ;
-(struct _NSRange )layOutFootnotesFromIndex:(NSUInteger)arg0 intoFootnoteContainer:(id)arg1 maxBlockHeight:(CGFloat)arg2 pageCharRange:(struct _NSRange )arg3 sectionCharRange:(struct _NSRange )arg4 isLastSection:(BOOL)arg5 sectionHint:(id)arg6 pageHintIndex:(NSUInteger)arg7 ;
-(void)inflateFootnotesInRange:(struct _NSRange )arg0 intoFootnoteContainer:(id)arg1 ;
-(void)removeDeletedFootnoteInContainer:(id)arg0 ;


@end


#endif