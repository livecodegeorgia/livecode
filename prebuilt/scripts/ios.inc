# List of iOS variants to build
declare -a IOS_XCODE
declare -a IOS_SUBPLATFORM
declare -a IOS_VERSION
declare -a IOS_ARCHS

function addiOS {
	XCODE=$1
	SUBPLATFORM=$2
	VERSION=$3
	ARCHS=$4
	
	ELEMENTS=${#IOS_XCODE[@]}
	IOS_XCODE[$ELEMENTS]=${XCODE}
	IOS_SUBPLATFORM[$ELEMENTS]=${SUBPLATFORM}
	IOS_VERSION[$ELEMENTS]=${VERSION}
	IOS_ARCHS[$ELEMENTS]=${ARCHS}
	
	export IOS_COUNT=${#IOS_XCODE[@]}
}

# Where to find Xcode installations
XCODES_DIR="${HOME}/Builds/Platforms"

# Detect iOS variants
#if [ -e "${XCODES_DIR}/Xcode_3_2_6" ] ; then
#	addiOS "${XCODES_DIR}/Xcode_3_2_6" iPhoneSimulator 4.3 i386
#fi
#if [ -e "${XCODES_DIR}/Xcode_4_2_0" ] ; then
#	addiOS "${XCODES_DIR}/Xcode_4_2_0" iPhoneSimulator 5.0 i386
#	addiOS "${XCODES_DIR}/Xcode_4_2_0" iPhoneOS 5.0 armv7
#fi
if [ -e "${XCODES_DIR}/Xcode_4_3_1" ] ; then
	addiOS "${XCODES_DIR}/Xcode_4_3_1/Xcode.app/Contents/Developer" iPhoneSimulator 5.1 i386
fi
#if [ -e "${XCODES_DIR}/Xcode_4_5_0" ] ; then
#	addiOS "${XCODES_DIR}/Xcode_4_5_0/Xcode.app/Contents/Developer" iPhoneSimulator 6.0 i386
#fi
if [ -e "${XCODES_DIR}/Xcode_4_6_0" ] ; then
	addiOS "${XCODES_DIR}/Xcode_4_6_0/Xcode.app/Contents/Developer" iPhoneSimulator 6.1 i386
	addiOS "${XCODES_DIR}/Xcode_4_6_0/Xcode.app/Contents/Developer" iPhoneOS 6.1 armv7
fi
#if [ -e "${XCODES_DIR}/Xcode_5_0_0" ] ; then
#	addiOS "${XCODES_DIR}/Xcode_5_0_0/Xcode.app/Contents/Developer" iPhoneSimulator 7.0 i386
#	addiOS "${XCODES_DIR}/Xcode_5_0_0/Xcode.app/Contents/Developer" iPhoneOS 7.0 armv7
#fi
if [ -e "${XCODES_DIR}/Xcode_5_1_0" ] ; then
	addiOS "${XCODES_DIR}/Xcode_5_1_0/Xcode.app/Contents/Developer" iPhoneSimulator 7.1 i386
	addiOS "${XCODES_DIR}/Xcode_5_1_0/Xcode.app/Contents/Developer" iPhoneOS 7.1 armv7
fi
if [ -e "${XCODES_DIR}/Xcode_6_2_0" ] ; then
	addiOS "${XCODES_DIR}/Xcode_6_2_0/Xcode.app/Contents/Developer" iPhoneSimulator 8.2 "i386 x86_64"
	addiOS "${XCODES_DIR}/Xcode_6_2_0/Xcode.app/Contents/Developer" iPhoneOS 8.2 "armv7 arm64"
fi
if [ -e "${XCODES_DIR}/Xcode_6_3_0" ] ; then
	addiOS "${XCODES_DIR}/Xcode_6_3_0/Xcode.app/Contents/Developer" iPhoneSimulator 8.3 "i386 x86_64"
	addiOS "${XCODES_DIR}/Xcode_6_3_0/Xcode.app/Contents/Developer" iPhoneOS 8.3 "armv7 arm64"
fi
