// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXNSZIPFILEARCHIVE_H
#define VFXNSZIPFILEARCHIVE_H

@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VFXNSZipFileArchive : NSObject {
    NSDictionary *_contents;
    NSData *_data;
    id *_provider;
    NSInteger _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    *void _reserved;
    __zFlags _zFlags;
    *void _reserved2;
}




-(BOOL)isValid;
-(BOOL)writeContentsForEntryName:(id)arg0 toFile:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeToFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)archiveData;
-(id)archiveStream;
-(id)contentsForEntryName:(id)arg0 ;
-(id)entryNames;
-(id)initWithData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithEntryNames:(id)arg0 contents:(id)arg1 properties:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithEntryNames:(id)arg0 dataProvider:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithPath:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)propertiesForEntryName:(id)arg0 ;
-(id)streamForEntryName:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif