// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UAFILECHUNKINPUTSTREAM_H
#define UAFILECHUNKINPUTSTREAM_H

@class NSInputStream, NSNumber, NSFileHandle;



@interface UAFileChunkInputStream : NSInputStream

@property (retain) NSNumber *chunkOffset; // ivar: _chunkOffset
@property NSInteger chunkSize; // ivar: _chunkSize
@property (retain) NSNumber *currentOffset; // ivar: _currentOffset
@property (retain) NSFileHandle *file; // ivar: _file
@property NSInteger readSize; // ivar: _readSize
@property NSUInteger status; // ivar: _status


-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)initWithFileHandle:(id)arg0 offsetInFile:(id)arg1 size:(NSInteger)arg2 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)close;
-(void)open;


@end


#endif