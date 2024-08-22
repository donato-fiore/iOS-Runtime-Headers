// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAPDFHYPERLINKCONTROLLER_H
#define TSAPDFHYPERLINKCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSAPdfHyperlinkController : NSObject {
    NSMutableArray *mHyperlinks;
    NSMutableArray *mDestinations;
}




-(BOOL)ignoreUrl:(id)arg0 ;
-(BOOL)isDestination:(id)arg0 ;
-(id)destinationFromUrl:(id)arg0 ;
-(id)init;
-(id)p_chopBezierIntoRects:(id)arg0 ;
-(id)p_hyperlinkRegionsForRep:(id)arg0 ;
-(struct CGRect )canvasRect;
-(void)addHyperlinkForRect:(struct CGRect )arg0 withUrl:(id)arg1 ;
-(void)addHyperlinksForRep:(id)arg0 ;
-(void)commitHyperlinksToPDF:(struct CGContext *)arg0 targetRect:(struct CGRect )arg1 ;
-(void)p_combineSimilarElements:(id)arg0 ;
-(void)p_commitDestinationToPDF:(id)arg0 cgrect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(void)p_commitUrlToPDF:(id)arg0 cgrect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;


@end


#endif