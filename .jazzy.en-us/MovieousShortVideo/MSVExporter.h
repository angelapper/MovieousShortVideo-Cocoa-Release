//
//  MSVExporter.h
//  MovieousShortVideo
//
//  Created by Chris Wang on 2018/10/18.
//  Copyright © 2018 Movieous Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVDraft.h"
#import "MSVTypeDefines.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Exporter class.
 */
@interface MSVExporter : NSObject

/**
 * Draft object.
 */
@property (nonatomic, strong, nullable) MSVDraft *draft;

/**
 * 是否在导出时将视频部分倒放。
 */
@property (nonatomic, assign) BOOL reverseVideo;

/**
 * Whether the export task is running.
 */
@property (nonatomic, assign, readonly) BOOL running;

/**
 * The file type of the video export.
 * The default is MSVFileTypeMPEG4(.mp4).
 */
@property (assign, nonatomic) MSVFileType outputFileType;

/**
 * The path of the video exporter only supports the local file path.
 * The default is the automatically generated path.
 */
@property (strong, nonatomic, nullable) NSString *outputPath;

/**
 * Whether to export the video to the album at the same time.
 * The default is NO.
 */
@property (assign, nonatomic) BOOL saveToPhotosAlbum;

/**
 * The bitrate of the output video.
 * The default is the automatically generated bitrate by encoder.
 * not valid for MSVFileTypeAppleM4A
 */
@property (nonatomic, assign) NSUInteger videoBitrate;

/**
@abstract
    The maximum interval between key frames, also known as the key frame rate.
@discussion
    Key frames, also known as sync frames, reset inter-frame
    dependencies; decoding a key frame is sufficient to prepare a
    decoder for correctly decoding the difference frames that
    follow.
    Video encoders are allowed to generate key frames more frequently if
    this would result in more efficient compression.
    The default key frame interval is 0, which indicates that the
    video encoder should choose where to place all key frames. A key
    frame interval of 1 indicates that every frame must be a key
    frame, 2 indicates that at least every other frame must be a key
    frame, etc.
 */
@property (nonatomic, assign) NSUInteger maxKeyFrameInterval;

/**
 * The number of channels of the exported video.
 * The default is the number of channels used by original audio.
 */
@property (nonatomic, assign) UInt32 numberOfChannels;

/**
 * The audio sample rate of the video that exported.
 * The default is the original audio sample rate.
 */
@property (nonatomic, assign) Float64 sampleRate;

/**
 * The audio bitrate of the video that exported.
 * The default is the original video's bitrate.
 */
@property (nonatomic, assign) Float64 audioBitRate;

/**
 * Whether set up the transmission in the network environment.
 * The default is YES.
 */
@property (assign, nonatomic) BOOL shouldOptimizeForNetworkUse;

/**
 * Export progress callback.
 */
@property (nonatomic, copy, nullable) void(^progressHandler)(float progress);

/**
 * Export failure callback.
 */
@property (nonatomic, copy, nullable) void(^failureHandler)(NSError *error);

/**
 * Export successful callback.
 */
@property (nonatomic, copy, nullable) void(^completionHandler)(NSString *path);

/**
 * Init and new are both not available, use other initialization method instead.
 */
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * Initialize an exporter objects with initialization draft.
 *
 * @param draft Draft object that needs to be exported.
 *
 * @return It returns the initialized object if the initial succeeded, otherwise returns nil.
 */
- (instancetype)initWithDraft:(MSVDraft *_Nullable)draft;

/**
 * Create an exporter objects with initialization draft.
 *
 * @param draft Draft object that needs to be exported.
 *
 * @return It returns the initialized object if the initial succeeded, otherwise returns nil.
 */
+ (instancetype)exporterWithDraft:(MSVDraft *_Nullable)draft;

/**
 * Start exporting tasks.
 */
- (void)startExport;

/**
 * Cancel the export task.
 */
- (void)cancelExport;

@end

NS_ASSUME_NONNULL_END
