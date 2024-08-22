// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTRACKEDDELETION_H
#define TSWPTRACKEDDELETION_H

@class NSString;
@protocol TSWPReplaceAction;

#import <Foundation/Foundation.h>

#import "TSWPChangeSession.h"

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction>

 {
    _NSRange _range;
    TSWPChangeSession *_changeSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)delta;
-(NSUInteger)targetCharIndex;
-(id)initWithRange:(struct _NSRange )arg0 changeSession:(id)arg1 ;
-(struct _NSRange )insertedRange;
-(void)dealloc;
-(void)performWithStorage:(id)arg0 delta:(NSInteger)arg1 undoTransaction:(*void)arg2 replaceBlock:(id)arg3 ;


@end


#endif