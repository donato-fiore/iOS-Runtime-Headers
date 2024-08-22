// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDESCRIPTIONGENERATOR_H
#define TSPDESCRIPTIONGENERATOR_H

@class NSMutableOrderedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"

@interface TSPDescriptionGenerator : NSObject {
    TSPObjectContext *_context;
    NSUInteger _options;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableOrderedSet *_components;
    map<long long, TSP::DescriptionPrinterMessage, std::less<long long>, std::allocator<std::pair<const long long, TSP::DescriptionPrinterMessage>>> _messageMap;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_uuidMap;
    NSMutableDictionary *_inverseUUIDMap;
    NSMutableDictionary *_dataMap;
    id *_objectIdentifierForUUIDHandler;
    id *_printerCustomPropertiesHandler;
    id *_dataIdentifierHandler;
    id *_digestHandler;
}




+(BOOL)dumpMessagesForDocumentURL:(id)arg0 supportURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(id)directoryForDocumentUUID:(id)arg0 versionUUID:(id)arg1 ;
+(id)filenameForPackageIdentifier:(unsigned char)arg0 ;
-(*void)_messageAlternateMapFromArchivableContent:(id)arg0 ;
-(*void)_strongReferencesFromArchiver:(id)arg0 ;
-(BOOL)dumpComponentMessages:(id)arg0 printNewLine:(BOOL)arg1 withPrinter:(*void)arg2 outputStream:(*void)arg3 ;
-(BOOL)dumpMessagesForDocumentUUID:(id)arg0 versionUUID:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(BOOL)dumpMessagesToFilePath:(id)arg0 ;
-(id)descriptionForIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(void)addArchiver:(id)arg0 ;
-(void)addComponent:(id)arg0 ;
-(void)addMessage:(struct Message *)arg0 withStrongReferencesMap:(*void)arg1 forObjectIdentifier:(NSInteger)arg2 ;
-(void)addObject:(id)arg0 ;
-(void)addUUIDMapEntriesForComponent:(id)arg0 ;
-(void)performPrintOperationBlock:(id)arg0 ;
-(void)processPackageMetadataMessage:(struct shared_ptr<google::protobuf::Message> )arg0 ;


@end


#endif