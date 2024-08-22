// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILIBARCHIVESTREAMINGREADER_H
#define _UILIBARCHIVESTREAMINGREADER_H

@class NSString, NSMutableArray, NSError;

#import <Foundation/Foundation.h>


@interface _UILibArchiveStreamingReader : NSObject {
    NSInteger _state;
    *ui_archive _laArchive;
    int _laArchiveType;
    NSString *_laArchiveTypeName;
    int _laProcessingState;
    NSInteger _nextLoadedItemEntrySequenceIndex;
    NSMutableArray *_readableLoadedItemEntryQueue;
    NSError *_readError;
}


@property (nonatomic) NSInteger appleDoubleIdentificationType; // ivar: _appleDoubleIdentificationType
@property (readonly, nonatomic) NSString *archivePath; // ivar: _archivePath
@property (readonly, nonatomic) NSString *openedArchiveUnderlyingFormatName;
@property (readonly, nonatomic) *ui_archive underlyingArchive; // ivar: _underlyingArchive


-(BOOL)_openArchive;
// -(BOOL)_readItemsWithShouldVisitBlock:(id)arg0 visitorBlock:(unk)arg1 error:(id)arg2  ;
-(BOOL)_shouldReportAsAppleDoubleItem:(id)arg0 withConfirmedAppleDoubleFiles:(id)arg1 ;
-(BOOL)_shouldReportAsLogicalItem:(id)arg0 withConfirmedAppleDoubleFiles:(id)arg1 ;
-(BOOL)open;
// -(BOOL)readAllItemsWithBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)readLogicalItemsWithBlock:(id)arg0 error:(unk)arg1  ;
-(id)_debugLoadAndPrintAllRemainingItems;
-(id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg0 ;
-(id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
-(id)initForReadingArchivePath:(id)arg0 ;
-(void)_closeArchive;
-(void)close;


@end


#endif