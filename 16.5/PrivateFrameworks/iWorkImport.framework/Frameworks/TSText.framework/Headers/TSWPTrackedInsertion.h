// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTRACKEDINSERTION_H
#define TSWPTRACKEDINSERTION_H

@class NSString;
@protocol TSWPReplaceAction;

#import <Foundation/Foundation.h>

#import "TSWPSelection.h"
#import "TSWPChangeSession.h"

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction>

 {
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)delta;
-(NSUInteger)targetCharIndex;
-(id)initWithSelection:(id)arg0 string:(id)arg1 changeSession:(id)arg2 ;
-(struct _NSRange )insertedRange;
-(void)performWithStorage:(id)arg0 delta:(NSInteger)arg1 actionBuilder:(*void)arg2 withFlags:(unsigned int)arg3 replaceBlock:(id)arg4 ;


@end


#endif