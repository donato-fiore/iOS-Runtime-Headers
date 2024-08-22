// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPPAGECOUNTATTACHMENT_H
#define TSWPPAGECOUNTATTACHMENT_H



#import "TSWPNumberAttachment.h"

@interface TSWPPageCountAttachment : TSWPNumberAttachment



-(BOOL)changesWithPageCount;
-(BOOL)shouldArchiveStringEquivalent;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;
-(unsigned int)elementKind;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif