// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPPAGENUMBERATTACHMENT_H
#define TSWPPAGENUMBERATTACHMENT_H



#import "TSWPNumberAttachment.h"

@interface TSWPPageNumberAttachment : TSWPNumberAttachment



-(BOOL)changesWithPageNumber;
-(BOOL)shouldArchiveStringEquivalent;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;
-(int)elementKind;


@end


#endif