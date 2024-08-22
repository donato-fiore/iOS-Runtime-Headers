// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSTORAGEANCHORATTACHMENTMIGRATOR_H
#define TSWPSTORAGEANCHORATTACHMENTMIGRATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSWPStorageAnchorAttachmentMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *charIndexPlacementIndexArray; // ivar: _charIndexPlacementIndexArray


-(id)commandsForDidInsertIntoDestinationWPStorage:(id)arg0 insertionLocation:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(id)didCopyFromSourceWPStorage:(id)arg0 toTemporaryStorage:(id)arg1 copiedRange:(struct _NSRange )arg2 ;


@end


#endif