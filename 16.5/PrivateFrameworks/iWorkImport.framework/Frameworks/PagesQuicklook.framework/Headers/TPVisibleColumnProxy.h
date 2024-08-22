// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPVISIBLECOLUMNPROXY_H
#define TPVISIBLECOLUMNPROXY_H

@class NSString;
@protocol TSWPOffscreenColumn, TSWPFlowInfo;

#import <Foundation/Foundation.h>

#import "TPPaginatedPageController.h"

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn>

 {
    NSUInteger _pageIndex;
    id<TSWPFlowInfo> *_flowInfo;
    TPPaginatedPageController *_pageController;
}


@property (readonly, nonatomic) _NSRange anchoredRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) NSUInteger nextWidowPullsDownFromCharIndex;
@property (readonly, nonatomic) _NSRange range;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL terminatedByBreak;


-(NSUInteger)startAnchoredCharIndex;
-(NSUInteger)startCharIndex;
-(id)initWithPageIndex:(NSUInteger)arg0 pageController:(id)arg1 ;
-(id)initWithPageIndex:(NSUInteger)arg0 pageController:(id)arg1 flowInfo:(id)arg2 ;
-(id)p_targetFirstHint;
-(id)p_targetLastHint;
-(void)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 removeFootnoteReferenceCount:(NSUInteger)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3 ;


@end


#endif