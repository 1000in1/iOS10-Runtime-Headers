/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface AudioCircularBuffer : NSObject {
    short * _buffer;
    int  _bufferLength;
    float  _bufferSeconds;
    int  _endPos;
    long long  _markIn;
    long long  _markOut;
    long long  _outBufferLength;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _samplecount;
    int  _startPos;
}

@property (readonly) float bufferSeconds;
@property (nonatomic) long long markIn;
@property (nonatomic) long long markOut;

- (void).cxx_destruct;
- (void*)_copyBytesFrom:(long long)arg1 to:(long long)arg2 outLength:(long long*)arg3;
- (void)_writeToBuffer:(short*)arg1 len:(long long)arg2;
- (short)addSamples:(void*)arg1 len:(long long)arg2;
- (long long)bufferLength;
- (float)bufferSeconds;
- (void*)copyBufferFrom:(long long)arg1 to:(long long)arg2 withLength:(long long*)arg3;
- (void*)copyBufferWithLength:(long long*)arg1;
- (void)dealloc;
- (id)initWithBackBuffer:(float)arg1;
- (long long)markIn;
- (long long)markOut;
- (void)reset;
- (long long)sampleCount;
- (void)saveRecordingBufferFrom:(long long)arg1 to:(long long)arg2 toURL:(id)arg3;
- (void)setMarkIn:(long long)arg1;
- (void)setMarkOut:(long long)arg1;

@end