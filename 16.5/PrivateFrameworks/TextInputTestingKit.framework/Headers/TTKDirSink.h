// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKDIRSINK_H
#define TTKDIRSINK_H

@class NSString, NSDictionary, NSMutableArray;
@protocol TTKTestCaseSink;

#import <Foundation/Foundation.h>


@interface TTKDirSink : NSObject <TTKTestCaseSink>

 {
    NSString *_rootDir;
    NSString *_inputMode;
    NSDictionary *_layouts;
    BOOL _writeOnFlush;
    unsigned int _maxTestCasesPerFile;
    unsigned int _maxFilesPerDirectory;
    NSMutableArray *_testCasesToWrite;
    unsigned int _dirCounter;
    unsigned int _fileCounter;
    NSString *_currDir;
    NSMutableArray *_testCaseDirs;
    NSMutableArray *_testCaseFiles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 writeOnFlush:(BOOL)arg3 maxTestCasesPerFile:(unsigned int)arg4 maxFilesPerDirectory:(unsigned int)arg5 ;
-(void)addLayouts:(id)arg0 ;
-(void)close;
-(void)flush;
-(void)flushFiles;
-(void)pushNextTestCase:(id)arg0 ;


@end


#endif