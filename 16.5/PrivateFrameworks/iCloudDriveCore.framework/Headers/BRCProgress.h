// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPROGRESS_H
#define BRCPROGRESS_H

@class NSProgress, NSMutableDictionary, NSArray;


#import "BRCAccountSessionFPFS.h"

@interface BRCProgress : NSProgress {
    NSMutableDictionary *_progressByAliasContainerID;
    BOOL _ignorePublish;
    BRCAccountSessionFPFS *_session;
    char _group;
}


@property (readonly, nonatomic) BOOL isPublished; // ivar: _published
@property (readonly, nonatomic) NSArray *parentFileIDs; // ivar: _parentFileIDs


+(id)_progressForDocument:(id)arg0 group:(char)arg1 sizeInfo:(id)arg2 ;
+(id)uploadProgressForDocument:(id)arg0 sizeInfo:(id)arg1 ;
-(id)initWithGroup:(char)arg0 parentFileIDs:(id)arg1 session:(id)arg2 ;
-(id)initWithIgnorePublish:(BOOL)arg0 ;
-(void)_setupProgressForDocument:(id)arg0 group:(char)arg1 sizeInfo:(id)arg2 ;
-(void)_updateToBeProgressForDocument:(id)arg0 group:(char)arg1 sizeinfo:(id)arg2 ;
-(void)addAliasItem:(id)arg0 ;
-(void)brc_publish;
-(void)brc_unpublish;
-(void)setCompletedUnitCount:(NSInteger)arg0 ;
-(void)setSession:(id)arg0 parentFileIDs:(id)arg1 group:(char)arg2 ;
-(void)updateToBeDownloadProgressForDocument:(id)arg0 sizeInfo:(id)arg1 ;


@end


#endif