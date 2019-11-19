//
//  MSVRecorderBackgroundAudioConfiguration.h
//  MovieousShortVideo
//
//  Created by Chris Wang on 2018/10/17.
//  Copyright © 2018 Movieous Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MovieousBase/MovieousBase.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Background audio configuration class.
 */
@interface MSVRecorderBackgroundAudioConfiguration : NSObject

/**
 * Background audio source file path.
 */
@property (nonatomic, strong, readonly) NSString *path;

/**
 * The time range to use of the audio source.
 * The default is kMovieousTimeRangeDefault
 */
@property (nonatomic, assign) MovieousTimeRange timeRange;

/**
 * Volume of background audio, the default is the preferredVolume in the audio file.
 * The default is 1
 */
@property (nonatomic, assign) float volume;

/**
 * Loop audio play untill recording finishes.
 * The default is NO
 */
@property (nonatomic, assign) BOOL loop;

/**
 * Create a new MSVRecorderBackgroundAudioConfiguration instance.
 *
 * @param path Audio source file path.
 * @param outError Return error if any.
 * 
 * @return Created instance if success or else nil.
 */
+ (instancetype _Nullable)backgroundAudioConfigurationWithPath:(NSString *)path error:(NSError *_Nullable *_Nullable)outError;

@end

NS_ASSUME_NONNULL_END
