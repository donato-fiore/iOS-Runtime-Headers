// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDISTRIBUTABLEREADER_H
#define TSPDISTRIBUTABLEREADER_H

@class NSString;
@protocol TSPStreamingDistributableUnarchiver;

#import <Foundation/Foundation.h>

#import "TSPDatabase.h"
#import "TSPDistributableFileManager.h"

@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver>

 {
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    BOOL _hasReadTangierVersionRoot;
    uint8_t _isCancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readCheckCrcFromArchiveInputStream:(id)arg0 crc:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)_initializeNewDocumentDirectory:(id)arg0 ;
-(BOOL)handleArchivedVersions:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)handleClassInfoWithClassType:(int)arg0 className:(id)arg1 isProtobufClass:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)handleFileDescriptorProtoWithInputStream:(id)arg0 length:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)handleObjectWithIdentifier:(NSInteger)arg0 fileStateIdentifier:(id)arg1 version:(unsigned int)arg2 classType:(int)arg3 stream:(id)arg4 length:(NSInteger)arg5 relationshipTargets:(*NSInteger)arg6 relationshipCount:(unsigned int)arg7 error:(*id)arg8 ;
-(BOOL)readFromDistributableArchiveStream:(id)arg0 estimatedDataLength:(NSInteger)arg1 supplementalDataBundle:(id)arg2 error:(*id)arg3 ;
-(id)initWithDestinationPath:(id)arg0 ;
-(void)cancel;


@end


#endif