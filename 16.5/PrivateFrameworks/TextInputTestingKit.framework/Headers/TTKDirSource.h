// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKDIRSOURCE_H
#define TTKDIRSOURCE_H

@class NSString, NSMutableArray, NSDictionary;
@protocol TTKTestCaseSource;

#import <Foundation/Foundation.h>


@interface TTKDirSource : NSObject <TTKTestCaseSource>

 {
    NSString *_rootDir;
    NSString *_currDir;
    NSMutableArray *_testCaseDirs;
    NSMutableArray *_testCaseFiles;
    NSObject<TTKTestCaseSource> *_currTestCaseSource;
    BOOL _is_multiDir;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float fileVersion; // ivar: _fileVersion
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (readonly, copy, nonatomic) NSDictionary *layouts; // ivar: _layouts
@property (readonly, nonatomic) int majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) int minorVersion; // ivar: _minorVersion
@property (copy, nonatomic) id *onNewLayoutsFound; // ivar: _onNewLayoutsFound
@property (readonly) Class superclass;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)getNextTestCase;
-(id)init:(id)arg0 ;
-(void)loadLayouts:(id)arg0 ;
-(void)loadRootDir;
-(void)reset;


@end


#endif